//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGGraphEdge.h>

#import <PhotosGraph/PGGraphMeaningEdge-Protocol.h>

@class NSString;

@interface PGGraphMeaningEdge : PGGraphEdge <PGGraphMeaningEdge>
{
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isReliable; // @dynamic isReliable;
@property(readonly, nonatomic) NSString *meaningLabel; // @dynamic meaningLabel;
@property(readonly, nonatomic) double reliabilityScore; // @dynamic reliabilityScore;
@property(readonly) Class superclass;
@end
