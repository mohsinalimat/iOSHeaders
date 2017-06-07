//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class KNBuild, KNBuildAttributeValue, KNBuildChunk, KNBuildChunkIdentifier, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface KNBuildAttributeTuple : TSPObject <NSCopying>
{
    NSString *_property;
    KNBuildAttributeValue *_attributeValue;
    KNBuildChunkIdentifier *_buildChunkIdentifier;
    NSUUID *_buildId;
    _Bool _definedAttributeValue;
    _Bool _definedBuildChunkIdentifier;
    _Bool _definedBuildId;
}

+ (id)tupleWithChunk:(id)arg1 referent:(unsigned long long)arg2;
+ (id)tupleForBuild:(id)arg1 property:(id)arg2 value:(id)arg3;
+ (id)tupleWithChunk:(id)arg1 property:(id)arg2 value:(id)arg3;
@property(readonly, nonatomic) KNBuildAttributeValue *value; // @synthesize value=_attributeValue;
@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;
- (id)description;
- (_Bool)isValidForSlide:(id)arg1;
@property(readonly, nonatomic) _Bool isChunkTuple;
@property(readonly, nonatomic) _Bool isBuildTuple;
@property(readonly, nonatomic) KNBuild *build;
@property(readonly, nonatomic) KNBuildChunk *chunk;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithChunk:(id)arg1 property:(id)arg2 value:(id)arg3;
- (id)initWithBuild:(id)arg1 property:(id)arg2 value:(id)arg3;
- (id)initWithBuild:(id)arg1 chunk:(id)arg2 property:(id)arg3 value:(id)arg4;

@end

