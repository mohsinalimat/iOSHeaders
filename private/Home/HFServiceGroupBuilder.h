//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemBuilder.h>

#import <Home/HFServiceLikeBuilder-Protocol.h>

@class HFMutableSetDiff, HFRoomBuilder, HMServiceGroup, NSArray, NSString;
@protocol HFIconDescriptor;

@interface HFServiceGroupBuilder : HFItemBuilder <HFServiceLikeBuilder>
{
    NSString *_name;
    HFMutableSetDiff *_serviceUUIDs;
    HFRoomBuilder *_roomBuilder;
}

+ (Class)homeKitRepresentationClass;
@property(retain, nonatomic) HFRoomBuilder *roomBuilder; // @synthesize roomBuilder=_roomBuilder;
@property(readonly, nonatomic) HFMutableSetDiff *serviceUUIDs; // @synthesize serviceUUIDs=_serviceUUIDs;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(nonatomic) _Bool isFavorite;
@property(retain, nonatomic) HFRoomBuilder *room;
- (id)accessories;
@property(readonly, nonatomic) _Bool supportsFavoriting;
@property(readonly, nonatomic) NSString *originalName;
- (id)_rooms;
- (id)_updateServices;
- (id)_updateName;
- (id)_createServiceGroup;
- (id)_performValidation;
- (id)commitItem;
@property(readonly, nonatomic) NSArray *services;
- (void)removeService:(id)arg1;
- (void)addService:(id)arg1;
- (_Bool)shouldAllowAddingService:(id)arg1;
- (void)setServiceGroup:(id)arg1;
@property(readonly, nonatomic) NSString *primaryServiceType;
@property(readonly, nonatomic) HMServiceGroup *serviceGroup;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) NSArray *availableIconDescriptors;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) id <HFIconDescriptor> iconDescriptor;
@property(readonly) Class superclass;

@end

