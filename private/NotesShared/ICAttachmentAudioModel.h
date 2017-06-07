//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/ICAttachmentModel.h>

@class NSDate, NSString;

@interface ICAttachmentAudioModel : ICAttachmentModel
{
    _Bool _recordedInNotes;
    NSString *_title;
    NSDate *_creationDate;
}

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
@property(copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool recordedInNotes; // @synthesize recordedInNotes=_recordedInNotes;
- (void).cxx_destruct;
- (CDUnknownBlockType)genericBrickThumbnailCreator;
- (CDUnknownBlockType)genericListThumbnailCreator;
- (void)updateFileBasedAttributes;
- (id)initWithAttachment:(id)arg1;

@end

