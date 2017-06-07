//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreCDPInternal/NSObject-Protocol.h>

@class NSDictionary;

@protocol CDPDProtectedCloudStorageProxy <NSObject>
- (_Bool)pcsRestoreLocalBackup:(NSDictionary *)arg1 error:(id *)arg2;
- (_Bool)pcsSynchronizeKeysWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (_Bool)pcsIdentityMigrateToStingrayWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (_Bool)pcsIdentityMigrateToiCDPWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (_Bool)pcsIdentitySetIsInICDPLocal:(struct _PCSIdentitySetData *)arg1 error:(id *)arg2;
- (_Bool)pcsIdentitySetIsInICDPNetwork:(struct _PCSIdentitySetData *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;
- (struct _PCSIdentitySetData *)pcsIdentitySetupWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
- (struct _PCSIdentitySetData *)pcsIdentityCreateWithInfo:(NSDictionary *)arg1 error:(id *)arg2;
@end

