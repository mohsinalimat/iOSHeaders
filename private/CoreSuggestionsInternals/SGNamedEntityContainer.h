//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGExternalEnrichment-Protocol.h>

@class NSMutableArray, PPSource;

@interface SGNamedEntityContainer : NSObject <SGExternalEnrichment>
{
    _Bool _cloudSync;
    NSMutableArray *_entities;
    NSMutableArray *_topics;
    PPSource *_source;
    unsigned long long _entityAlgorithm;
    unsigned long long _topicAlgorithm;
    double _decayRate;
}

@property(nonatomic) double decayRate; // @synthesize decayRate=_decayRate;
@property(nonatomic) _Bool cloudSync; // @synthesize cloudSync=_cloudSync;
@property(nonatomic) unsigned long long topicAlgorithm; // @synthesize topicAlgorithm=_topicAlgorithm;
@property(nonatomic) unsigned long long entityAlgorithm; // @synthesize entityAlgorithm=_entityAlgorithm;
@property(retain, nonatomic) PPSource *source; // @synthesize source=_source;
@property(retain, nonatomic) NSMutableArray *topics; // @synthesize topics=_topics;
@property(retain, nonatomic) NSMutableArray *entities; // @synthesize entities=_entities;
- (void).cxx_destruct;
- (void)write;

@end
