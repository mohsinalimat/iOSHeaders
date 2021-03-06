//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSMutableSet;

@interface HMCameraStreamPreferences : NSObject <NSSecureCoding>
{
    NSMutableSet *_preferredVideoResolutions;
    NSMutableSet *_preferredAudioCodecs;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSMutableSet *preferredAudioCodecs; // @synthesize preferredAudioCodecs=_preferredAudioCodecs;
@property(readonly, nonatomic) NSMutableSet *preferredVideoResolutions; // @synthesize preferredVideoResolutions=_preferredVideoResolutions;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

