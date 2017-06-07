//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDSubserver.h>

#import <HealthDaemon/HDMedicalIDServerInterface-Protocol.h>

@class NSString;

@interface HDMedicalIDServer : HDSubserver <HDMedicalIDServerInterface>
{
}

- (void)remote_medicalIDEmergencyContactsWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_deleteMedicalIDDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)remote_updateMedicalIDData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)remote_medicalIDDataCreateIfNecessary:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

