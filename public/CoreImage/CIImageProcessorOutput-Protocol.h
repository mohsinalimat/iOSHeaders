//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol MTLCommandBuffer, MTLTexture;

@protocol CIImageProcessorOutput
@property(readonly, nonatomic) id <MTLCommandBuffer> metalCommandBuffer;
@property(readonly, nonatomic) id <MTLTexture> metalTexture;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer;
@property(readonly, nonatomic) void *baseAddress;
@property(readonly, nonatomic) int format;
@property(readonly, nonatomic) unsigned long long bytesPerRow;
@property(readonly, nonatomic) struct CGRect region;
@end

