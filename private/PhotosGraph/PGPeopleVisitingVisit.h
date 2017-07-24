//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, PGGraphNode;

@interface PGPeopleVisitingVisit : NSObject
{
    NSMutableArray *_momentNodes;
    _Bool _hasVeryCloseMoments;
    PGGraphNode *_addressNode;
}

@property(readonly) NSArray *momentNodes; // @synthesize momentNodes=_momentNodes;
@property(readonly) PGGraphNode *addressNode; // @synthesize addressNode=_addressNode;
- (void).cxx_destruct;
- (id)description;
@property(readonly) _Bool matchesCloseVisitCriteria;
@property(readonly) _Bool matchesFarVisitCriteria;
@property(readonly) _Bool isValid;
- (void)addMomentNode:(id)arg1 isVeryClose:(_Bool)arg2;
- (id)initWithAddressNode:(id)arg1;

@end

