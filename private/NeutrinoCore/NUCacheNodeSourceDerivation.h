//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUSourceDerivation-Protocol.h>

@interface NUCacheNodeSourceDerivation : NSObject <NUSourceDerivation>
{
    long long _subsampleFactor;
}

- (long long)orientationFromOriginal:(long long)arg1 derivativeOrientation:(long long)arg2;
- (CDStruct_912cb5d2)scaleFromOriginalSize:(CDStruct_912cb5d2)arg1 derivativeSize:(CDStruct_912cb5d2)arg2;
- (id)initWithSubsampleFactor:(long long)arg1;
- (id)init;

@end

