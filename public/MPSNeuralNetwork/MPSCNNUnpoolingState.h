//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSCore/MPSState.h>

@interface MPSCNNUnpoolingState : MPSState
{
    unsigned long long _imageWidth;
    unsigned long long _imageHeight;
}

@property(readonly, nonatomic) unsigned long long imageHeight; // @synthesize imageHeight=_imageHeight;
@property(readonly, nonatomic) unsigned long long imageWidth; // @synthesize imageWidth=_imageWidth;
- (id)initWithResource:(id)arg1 cache:(struct MPSAutoCache *)arg2 imageWidth:(unsigned long long)arg3 imageHeight:(unsigned long long)arg4;

@end

