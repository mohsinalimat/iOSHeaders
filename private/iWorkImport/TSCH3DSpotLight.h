//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSCH3DLight.h>

#import <iWorkImport/TSCH3DLightDirectional-Protocol.h>
#import <iWorkImport/TSCH3DLightPositionable-Protocol.h>

@class TSCH3DVector;

__attribute__((visibility("hidden")))
@interface TSCH3DSpotLight : TSCH3DLight <TSCH3DLightPositionable, TSCH3DLightDirectional>
{
    TSCH3DVector *_position;
    TSCH3DVector *_direction;
    float _cutOff;
    float _dropOff;
}

+ (Class)effectClass;
+ (id)instanceWithArchive:(const struct Chart3DLightArchive *)arg1 unarchiver:(id)arg2;
@property(nonatomic) float dropOff; // @synthesize dropOff=_dropOff;
@property(nonatomic) float cutOff; // @synthesize cutOff=_cutOff;
@property(nonatomic) tvec3_17f03ce0 direction;
@property(nonatomic) tvec3_17f03ce0 position;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (void)saveToArchive:(struct Chart3DLightArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct Chart3DLightArchive *)arg1 unarchiver:(id)arg2;

@end

