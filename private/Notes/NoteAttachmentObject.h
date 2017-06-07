//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSString, NoteObject;

@interface NoteAttachmentObject : NSManagedObject
{
}

+ (_Bool)applyFileAttributesForAttachment:(id)arg1 error:(id *)arg2;
+ (_Bool)migrateFileForAttachment:(id)arg1 toCurrentAttachmentPathWithError:(id *)arg2;
+ (_Bool)migrateAttachmentRelatedFilesInContext:(id)arg1 error:(id *)arg2;
+ (id)attachmentDirectoryPathForAttachmentObjectID:(id)arg1 error:(id *)arg2;
+ (id)attachmentDirectoryURLForAttachmentObjectID:(id)arg1 error:(id *)arg2;
- (void)prepareForDeletion;
- (id)attachmentDataWithError:(id *)arg1;
- (id)attachmentDataFileURLWithError:(id *)arg1;
- (_Bool)persistAttachmentData:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(retain, nonatomic) NSString *contentID; // @dynamic contentID;
@property(retain, nonatomic) NSString *filename; // @dynamic filename;
@property(retain, nonatomic) NSString *mimeType; // @dynamic mimeType;
@property(retain, nonatomic) NoteObject *note; // @dynamic note;

@end

