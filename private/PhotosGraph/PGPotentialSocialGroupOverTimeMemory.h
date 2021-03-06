//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, NSSet, NSString, PGGraphSocialGroupNode;

@interface PGPotentialSocialGroupOverTimeMemory : PGPotentialMemory
{
    PGGraphSocialGroupNode *_socialGroupNode;
    NSSet *_personNodes;
    NSArray *_curatedAssets;
    NSArray *_facedAssets;
    NSString *_uuid;
}

@property(readonly) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain) NSArray *facedAssets; // @synthesize facedAssets=_facedAssets;
@property(retain) NSArray *curatedAssets; // @synthesize curatedAssets=_curatedAssets;
@property(readonly) NSSet *personNodes; // @synthesize personNodes=_personNodes;
@property(readonly) PGGraphSocialGroupNode *socialGroupNode; // @synthesize socialGroupNode=_socialGroupNode;
- (void).cxx_destruct;
- (id)initWithSocialGroupNode:(id)arg1 momentNodes:(id)arg2;

@end

