//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVConference/NSCoding-Protocol.h>
#import <AVConference/NSCopying-Protocol.h>

@interface VideoAttributes : NSObject <NSCopying, NSCoding>
{
    struct CGSize ratio;
    int orientation;
    int camera;
    _Bool cameraSwitching;
    struct CGRect contentsRect;
    _Bool videoSourceScreen;
}

+ (id)cameraUIDForVideoAttributeCamera:(int)arg1;
+ (int)videoAttributeCameraForCameraUID:(id)arg1;
+ (id)videoAttributesWithVideoAttributes:(id)arg1;
@property(nonatomic) _Bool videoSourceScreen; // @synthesize videoSourceScreen;
@property(nonatomic) struct CGRect contentsRect; // @synthesize contentsRect;
@property(nonatomic) _Bool cameraSwitching; // @synthesize cameraSwitching;
@property(nonatomic) int camera; // @synthesize camera;
@property(nonatomic) int orientation; // @synthesize orientation;
@property(nonatomic) struct CGSize ratio; // @synthesize ratio;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeFromNSDictionary:(id)arg1;
- (id)copyEncodedDictionary;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqualToVideoAttributes:(id)arg1;
- (id)initWithEncodedDictionary:(id)arg1;
- (id)initWithCameraStatusBits:(unsigned char)arg1 aspectRatio:(struct CGSize)arg2 contentsRect:(struct CGRect)arg3;
- (id)init;

@end

