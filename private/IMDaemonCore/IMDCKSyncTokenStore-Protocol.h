//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMDaemonCore/NSObject-Protocol.h>

@class CKServerChangeToken, NSString;

@protocol IMDCKSyncTokenStore <NSObject>
- (void)persistToken:(CKServerChangeToken *)arg1 forKey:(NSString *)arg2;
- (CKServerChangeToken *)tokenForKey:(NSString *)arg1;
- (void)migrateKey:(NSString *)arg1 fromDatabase:(NSString *)arg2;
@end

