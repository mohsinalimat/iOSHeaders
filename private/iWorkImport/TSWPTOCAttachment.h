//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPDrawableAttachment.h>

@class TSWPTOCInfo;

__attribute__((visibility("hidden")))
@interface TSWPTOCAttachment : TSWPDrawableAttachment
{
}

- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (int)elementKind;
- (void)saveTOCAttachmentMessage:(struct TOCAttachmentArchive *)arg1 archiver:(id)arg2;
- (void)loadTOCAttachmentMessage:(const struct TOCAttachmentArchive *)arg1 fromUnarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
@property(readonly, retain, nonatomic) TSWPTOCInfo *tocInfo;

@end
