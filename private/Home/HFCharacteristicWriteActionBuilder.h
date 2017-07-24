//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFActionBuilder.h>

@class HMCharacteristic, HMCharacteristicWriteAction;
@protocol NSCopying;

@interface HFCharacteristicWriteActionBuilder : HFActionBuilder
{
    HMCharacteristic *_characteristic;
    id <NSCopying> _targetValue;
}

+ (Class)homeKitRepresentationClass;
@property(retain, nonatomic) id <NSCopying> targetValue; // @synthesize targetValue=_targetValue;
@property(retain, nonatomic) HMCharacteristic *characteristic; // @synthesize characteristic=_characteristic;
- (void).cxx_destruct;
- (id)commitItem;
- (id)_performValidation;
- (id)createNewAction;
- (_Bool)requiresDeviceUnlock;
- (_Bool)updateWithActionBuilder:(id)arg1;
- (id)copyForCreatingNewAction;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) HMCharacteristicWriteAction *action; // @dynamic action;

@end

