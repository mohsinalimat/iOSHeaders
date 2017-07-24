//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@class NSArray, PGGraphPersonNode;

@interface PGPotentialPersonOverTimeMemory : PGPotentialMemory
{
    PGGraphPersonNode *_personNode;
    NSArray *_curatedAssets;
    NSArray *_facedAssets;
}

@property(retain) NSArray *facedAssets; // @synthesize facedAssets=_facedAssets;
@property(retain) NSArray *curatedAssets; // @synthesize curatedAssets=_curatedAssets;
@property(readonly) PGGraphPersonNode *personNode; // @synthesize personNode=_personNode;
- (void).cxx_destruct;
- (id)uuid;
- (id)initWithPersonNode:(id)arg1 momentNodes:(id)arg2;

@end

