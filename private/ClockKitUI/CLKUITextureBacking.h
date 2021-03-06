//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLKUIMmapFile, NSData, NSString;

@interface CLKUITextureBacking : NSObject
{
    NSData *_data;
    CLKUIMmapFile *_mmapFile;
    NSString *_uuid;
    struct CLKUITextureBackingStructure _structure;
}

+ (id)textureBackingWithBytes:(const void *)arg1 length:(unsigned long long)arg2 mmapFile:(id)arg3 uuid:(id)arg4;
+ (id)textureBackingWithArt:(id)arg1;
+ (id)textureBackingWithImage:(id)arg1 uuid:(id)arg2;
@property(readonly, nonatomic) struct CLKUITextureBackingStructure structure; // @synthesize structure=_structure;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
@property(nonatomic) unsigned char filter; // @dynamic filter;
@property(nonatomic) unsigned char wrap; // @dynamic wrap;
@property(readonly, nonatomic) _Bool mipmaps;
@property(readonly, nonatomic) unsigned char format; // @dynamic format;
@property(readonly, nonatomic) unsigned long long bytesPerPixel; // @dynamic bytesPerPixel;
@property(readonly, nonatomic) unsigned long long planeLength; // @dynamic planeLength;
@property(readonly, nonatomic) unsigned long long planes; // @dynamic planes;
@property(readonly, nonatomic) unsigned long long height; // @dynamic height;
@property(readonly, nonatomic) unsigned long long width; // @dynamic width;
@property(readonly, nonatomic) unsigned long long length; // @dynamic length;
@property(readonly, nonatomic) const void *bytes; // @dynamic bytes;
- (id)initWithUuid:(id)arg1 structure:(struct CLKUITextureBackingStructure)arg2 mmapFile:(id)arg3;
- (id)initWithUuid:(id)arg1 structure:(struct CLKUITextureBackingStructure)arg2 data:(id)arg3;

@end

