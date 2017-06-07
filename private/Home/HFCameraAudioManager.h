//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HFCharacteristicValueManager, HMCameraProfile, HMCameraStream;

@interface HFCameraAudioManager : NSObject
{
    HMCameraProfile *_cameraProfile;
    HMCameraStream *_cameraStream;
    HFCharacteristicValueManager *_valueManager;
}

@property(retain, nonatomic) HFCharacteristicValueManager *valueManager; // @synthesize valueManager=_valueManager;
@property(retain, nonatomic) HMCameraStream *cameraStream; // @synthesize cameraStream=_cameraStream;
@property(retain, nonatomic) HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
- (void).cxx_destruct;
- (CDUnknownBlockType)_readValidator;
- (id)_writeValuesForCharacteristics:(id)arg1;
- (id)_readValuesForCharacteristics:(id)arg1;
- (id)_enableAudioIfNecessaryForAudioControl:(id)arg1 minVolume:(float)arg2;
- (id)enableRemoteMicrophoneIfNecessary;
- (id)enableRemoteSpeakerIfNecessary;
- (id)_updateAudioStreamSetting:(unsigned long long)arg1;
- (id)setIncomingAudioEnabled:(_Bool)arg1;
- (id)setOutgoingAudioEnabled:(_Bool)arg1;
@property(readonly, nonatomic, getter=isIncomingAudioEnabled) _Bool incomingAudioEnabled;
@property(readonly, nonatomic, getter=isOutgoingAudioEnabled) _Bool outgoingAudioEnabled;
- (unsigned long long)audioStreamSetting;
- (id)initWithCameraProfile:(id)arg1 cameraStream:(id)arg2 valueManager:(id)arg3;

@end

