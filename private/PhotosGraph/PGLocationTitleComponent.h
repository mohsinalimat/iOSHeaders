//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, PGGraphEdge, PGGraphNode;

@interface PGLocationTitleComponent : NSObject
{
    NSMutableSet *_addressNodes;
    float _weight;
    PGGraphNode *_node;
    PGGraphEdge *_edge;
    double _timestampStart;
}

@property(readonly, nonatomic) float weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) double timestampStart; // @synthesize timestampStart=_timestampStart;
@property(retain, nonatomic) NSSet *addressNodes; // @synthesize addressNodes=_addressNodes;
@property(retain, nonatomic) PGGraphEdge *edge; // @synthesize edge=_edge;
@property(retain, nonatomic) PGGraphNode *node; // @synthesize node=_node;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)updateWithMomentNodes:(id)arg1;
- (_Bool)canMergeWithTitleComponent:(id)arg1;
- (void)addAddressNode:(id)arg1;
- (id)init;

@end

