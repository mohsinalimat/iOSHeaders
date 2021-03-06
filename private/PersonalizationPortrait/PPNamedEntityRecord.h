//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSMutableCopying-Protocol.h>

@class NSString, PPNamedEntity, PPSource;

@interface PPNamedEntityRecord : NSObject <NSCopying, NSMutableCopying>
{
    PPNamedEntity *_entity;
    PPSource *_source;
    unsigned long long _algorithm;
    double _initialScore;
    double _decayRate;
    NSString *_extractionOsBuild;
    unsigned long long _extractionAssetVersion;
}

+ (id)describeAlgorithm:(unsigned long long)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) unsigned long long extractionAssetVersion; // @synthesize extractionAssetVersion=_extractionAssetVersion;
@property(readonly, nonatomic) NSString *extractionOsBuild; // @synthesize extractionOsBuild=_extractionOsBuild;
@property(readonly, nonatomic) double decayRate; // @synthesize decayRate=_decayRate;
@property(readonly, nonatomic) double initialScore; // @synthesize initialScore=_initialScore;
@property(readonly, nonatomic) unsigned long long algorithm; // @synthesize algorithm=_algorithm;
@property(readonly, nonatomic) PPSource *source; // @synthesize source=_source;
@property(readonly, nonatomic) PPNamedEntity *entity; // @synthesize entity=_entity;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

