//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPPageNumberAttachment.h>

__attribute__((visibility("hidden")))
@interface KNSlideNumberAttachment : TSWPPageNumberAttachment
{
}

+ (id)newObjectForUnarchiver:(id)arg1;
+ (const struct TextualAttachmentArchive *)textualAttachmentArchiveFromUnarchiver:(id)arg1;
- (id)stringWithPageNumber:(unsigned long long)arg1 pageCount:(unsigned long long)arg2 charIndex:(unsigned long long)arg3;
- (_Bool)shouldArchiveStringEquivalent;
- (const struct TextualAttachmentArchive *)textualAttachmentArchiveFromUnarchiver:(id)arg1;

@end

