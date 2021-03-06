//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextureIO/TXRParser-Protocol.h>

@class NSDictionary, NSString, TXRDeferredTextureInfo, TXRTextureInfo;
@protocol OS_dispatch_queue;

@interface TXRParserKTX : NSObject <TXRParser>
{
    TXRTextureInfo *_textureInfo;
    unsigned int _bytesOfKeyValueData;
    _Bool _isCompressed;
    NSDictionary *_internalSizedFormatLookup;
    TXRDeferredTextureInfo *_deferredTextureInfo;
    NSObject<OS_dispatch_queue> *_parserQueue;
    _Bool _shouldFlipVertically;
}

+ (_Bool)exportTexture:(id)arg1 url:(id)arg2 error:(id *)arg3;
+ (_Bool)handlesData:(id)arg1;
@property(readonly, nonatomic) TXRTextureInfo *textureInfo; // @synthesize textureInfo=_textureInfo;
- (void).cxx_destruct;
- (id)parsedImageAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3;
- (unsigned long long)determineFormatFromType:(unsigned int)arg1 format:(unsigned int)arg2 internalFormat:(unsigned int)arg3 baseInternalFormat:(unsigned int)arg4;
- (void)parseImageData:(id)arg1 WithOptions:(id)arg2 bufferAllocator:(id)arg3;
- (_Bool)parseData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

