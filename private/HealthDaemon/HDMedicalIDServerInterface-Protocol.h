//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class _HKMedicalIDData;

@protocol HDMedicalIDServerInterface <NSObject>
- (void)remote_medicalIDEmergencyContactsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)remote_deleteMedicalIDDataWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)remote_updateMedicalIDData:(_HKMedicalIDData *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_medicalIDDataCreateIfNecessary:(_Bool)arg1 completion:(void (^)(_HKMedicalIDData *, NSError *))arg2;
@end

