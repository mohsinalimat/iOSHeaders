//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUVideoProperties-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface _NUVideoProperties : NSObject <NUVideoProperties>
{
    NSArray *_metadata;
    long long _orientation;
    NSDictionary *_colorProperties;
    CDStruct_d58201db _size;
    CDStruct_1b6d18a9 _livePhotoKeyFrameTime;
    CDStruct_996ac03c _cleanAperture;
}

@property(nonatomic) CDStruct_1b6d18a9 livePhotoKeyFrameTime; // @synthesize livePhotoKeyFrameTime=_livePhotoKeyFrameTime;
@property(retain, nonatomic) NSDictionary *colorProperties; // @synthesize colorProperties=_colorProperties;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) CDStruct_996ac03c cleanAperture; // @synthesize cleanAperture=_cleanAperture;
@property(nonatomic) CDStruct_912cb5d2 size; // @synthesize size=_size;
@property(retain, nonatomic) NSArray *metadata; // @synthesize metadata=_metadata;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithProperties:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
