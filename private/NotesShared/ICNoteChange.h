//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class ICFolder, NSMutableSet, NSNumber;

@interface ICNoteChange : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) NSNumber *changeType; // @dynamic changeType;
@property(retain, nonatomic) ICFolder *folder; // @dynamic folder;
@property(retain, nonatomic) NSMutableSet *legacyNoteIntegerIds; // @dynamic legacyNoteIntegerIds;
@property(retain, nonatomic) NSMutableSet *noteIdentifiers; // @dynamic noteIdentifiers;
@end

