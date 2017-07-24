//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFExperimentForSiriVOXSounds-Protocol.h>
#import <AssistantServices/AFExperimentForSiriVOXTapToSiriBehavior-Protocol.h>
#import <AssistantServices/NSCopying-Protocol.h>
#import <AssistantServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@interface AFExperiment : NSObject <AFExperimentForSiriVOXSounds, AFExperimentForSiriVOXTapToSiriBehavior, NSCopying, NSSecureCoding>
{
    NSString *_configurationIdentifier;
    NSString *_configurationVersion;
    NSString *_deploymentGroupIdentifier;
    NSDictionary *_deploymentGroupProperties;
    long long _deploymentReason;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long deploymentReason; // @synthesize deploymentReason=_deploymentReason;
@property(readonly, copy, nonatomic) NSDictionary *deploymentGroupProperties; // @synthesize deploymentGroupProperties=_deploymentGroupProperties;
@property(readonly, copy, nonatomic) NSString *deploymentGroupIdentifier; // @synthesize deploymentGroupIdentifier=_deploymentGroupIdentifier;
@property(readonly, copy, nonatomic) NSString *configurationVersion; // @synthesize configurationVersion=_configurationVersion;
@property(readonly, copy, nonatomic) NSString *configurationIdentifier; // @synthesize configurationIdentifier=_configurationIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithConfigurationIdentifier:(id)arg1 configurationVersion:(id)arg2 deploymentGroupIdentifier:(id)arg3 deploymentGroupProperties:(id)arg4 deploymentReason:(long long)arg5;
- (void)logExperimentExposureForSiriVOXSounds;
@property(readonly, nonatomic) _Bool playsSessionInactiveSoundForSiriVOXSounds;
@property(readonly, nonatomic) _Bool playsTwoShotSoundForSiriVOXSounds;
- (id)builder;
- (void)logExperimentExposureForTapToSiriBehavior;
@property(readonly, nonatomic) _Bool playsSound;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

