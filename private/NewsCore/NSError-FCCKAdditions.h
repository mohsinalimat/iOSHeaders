//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (FCCKAdditions)
- (id)fc_underlyingCKErrorUserInfoValueForKey:(id)arg1 forItemID:(id)arg2;
- (_Bool)fc_hasCKErrorWithCodePassingTest:(CDUnknownBlockType)arg1;
- (_Bool)fc_isCKErrorWithCodePassingTest:(CDUnknownBlockType)arg1;
- (_Bool)fc_isCKErrorWithCode:(long long)arg1;
- (_Bool)fc_hasIdentityLostError;
- (_Bool)fc_hasIdentityStillSyncingError;
- (_Bool)fc_isTemporaryNetworkOrServerError;
- (_Bool)fc_isMissingZoneError;
- (_Bool)fc_isCKUnknownItemError;
@end

