//
//  API.h
//  Trailer
//
//  Created by Paul Tsochantaris on 20/09/2013.
//  Copyright (c) 2013 HouseTrip. All rights reserved.
//

#define RATE_UPDATE_NOTIFICATION @"RateUpdateNotification"
#define RATE_UPDATE_NOTIFICATION_LIMIT_KEY @"RateUpdateNotificationLimit"
#define RATE_UPDATE_NOTIFICATION_REMAINING_KEY @"RateUpdateNotificationRemaining"

@interface API : NSObject

@property (nonatomic) NSString *authToken, *localUser, *localUserId, *resetDate;

- (void) fetchRepositoriesAndCallback:(void(^)(BOOL success))callback;

- (void) fetchPullRequestsForActiveReposAndCallback:(void(^)(BOOL success))callback;

- (void) getRateLimitAndCallback:(void(^)(long long remaining, long long limit, long long reset))callback;

@end
