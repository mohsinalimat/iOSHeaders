//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableObject-Protocol.h>
#import <Intents/INImageExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSURL;

@interface INImage : NSObject <INCacheableObject, INImageExport, NSCopying, NSSecureCoding>
{
    NSString *_identifier;
    NSData *_imageData;
    NSURL *_uri;
    NSString *_name;
    NSString *_bundlePath;
    CDStruct_8caa76fc _imageSize;
}

+ (_Bool)supportsSecureCoding;
+ (id)imageNamed:(id)arg1;
+ (id)imageWithImageData:(id)arg1;
+ (id)imageWithURL:(id)arg1 width:(double)arg2 height:(double)arg3;
+ (id)imageWithURL:(id)arg1;
+ (void)buildFromCachePayload:(id)arg1 identifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
@property(nonatomic, setter=_setImageSize:) CDStruct_8caa76fc _imageSize; // @synthesize _imageSize;
@property(copy, nonatomic, setter=_setBundlePath:) NSString *_bundlePath; // @synthesize _bundlePath;
@property(copy, nonatomic, setter=_setName:) NSString *_name; // @synthesize _name;
@property(copy, nonatomic, setter=_setUri:) NSURL *_uri; // @synthesize _uri;
@property(copy, nonatomic, setter=_setImageData:) NSData *_imageData; // @synthesize _imageData;
@property(readonly, copy, nonatomic) NSString *_identifier; // @synthesize _identifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)_initWithData:(id)arg1;
- (id)_initWithIdentifier:(id)arg1;
- (id)init;
@property(readonly, copy, nonatomic) NSString *cacheIdentifier;
- (void)generateCachePayloadWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

