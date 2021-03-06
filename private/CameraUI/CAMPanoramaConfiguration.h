//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/NSCoding-Protocol.h>

@interface CAMPanoramaConfiguration : NSObject <NSCoding>
{
    int _ringBufferSize;
    long long _sampleBufferWidth;
    long long _sampleBufferHeight;
    CDStruct_1b6d18a9 _minimumFramerate;
    CDStruct_1b6d18a9 _maximumFramerate;
}

@property(readonly, nonatomic) int ringBufferSize; // @synthesize ringBufferSize=_ringBufferSize;
@property(readonly, nonatomic) CDStruct_1b6d18a9 maximumFramerate; // @synthesize maximumFramerate=_maximumFramerate;
@property(readonly, nonatomic) CDStruct_1b6d18a9 minimumFramerate; // @synthesize minimumFramerate=_minimumFramerate;
@property(readonly, nonatomic) long long sampleBufferHeight; // @synthesize sampleBufferHeight=_sampleBufferHeight;
@property(readonly, nonatomic) long long sampleBufferWidth; // @synthesize sampleBufferWidth=_sampleBufferWidth;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithACTConfiguration:(id)arg1;

@end

