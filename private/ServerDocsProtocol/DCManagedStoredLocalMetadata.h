//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@interface DCManagedStoredLocalMetadata : NSManagedObject
{
}

+ (id)storedLocalMetadataForDocumentIdentifier:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)saveStoredLocalMetadata:(id)arg1 forDocumentIdentifier:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)entityName;
- (id)dictionaryRepresentation;
- (void)updateWithStoredLocalMetadataDictionary:(id)arg1;

@end

