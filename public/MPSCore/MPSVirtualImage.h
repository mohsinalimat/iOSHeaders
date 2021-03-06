//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSCore/MPSImage.h>

@protocol MTLTexture;

@interface MPSVirtualImage : MPSImage
{
}

@property(readonly, nonatomic) id <MTLTexture> texture;
- (void)writeBytes:(const void *)arg1 dataLayout:(unsigned long long)arg2 imageIndex:(unsigned long long)arg3;
- (void)readBytes:(void *)arg1 dataLayout:(unsigned long long)arg2 imageIndex:(unsigned long long)arg3;
- (void)writeBytes:(const void *)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 region:(CDStruct_4c83c94d)arg4 featureChannelInfo:(CDStruct_4bcfbbae)arg5 imageIndex:(unsigned long long)arg6;
- (void)readBytes:(void *)arg1 dataLayout:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 region:(CDStruct_4c83c94d)arg4 featureChannelInfo:(CDStruct_4bcfbbae)arg5 imageIndex:(unsigned long long)arg6;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;
- (id)initWithTexture:(id)arg1 featureChannels:(unsigned long long)arg2;
- (id)initWithDevice:(id)arg1 imageDescriptor:(id)arg2;

@end

