//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class CLSArchiveFile, NSData, NSNumber, NSSet, NSString;

@interface CLSArchiveClue : NSManagedObject
{
}

- (id)_typeDescription;
- (id)description;
- (id)placeArchivePrimitives;
- (id)eventArchivePrimitives;
- (id)personArchivePrimitives;
- (id)archivePrimitives;
- (id)relatedClues;
- (id)_primitivesForPredicate:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSSet *clues; // @dynamic clues;
@property(nonatomic) double confidence; // @dynamic confidence;
@property(retain, nonatomic) NSData *data; // @dynamic data;
@property(retain, nonatomic) CLSArchiveFile *file; // @dynamic file;
@property(retain, nonatomic) NSNumber *informantHash; // @dynamic informantHash;
@property(retain, nonatomic) NSString *key; // @dynamic key;
@property(retain, nonatomic) NSSet *primitives; // @dynamic primitives;
@property(retain, nonatomic) NSNumber *profileHash; // @dynamic profileHash;
@property(nonatomic) double relevance; // @dynamic relevance;
@property(nonatomic) short type; // @dynamic type;
@property(retain, nonatomic) NSString *value; // @dynamic value;

@end

