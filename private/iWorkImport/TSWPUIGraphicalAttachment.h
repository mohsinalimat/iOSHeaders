//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSWPAttachment.h>

__attribute__((visibility("hidden")))
@interface TSWPUIGraphicalAttachment : TSWPAttachment
{
}

- (_Bool)wantsSelectionAtPoint:(struct CGPoint)arg1;
@property(readonly, nonatomic) double baselineOffset;
@property(readonly, nonatomic) struct CGSize size;
- (void)invalidate;
- (id)rendererForAttachment;
- (int)elementKind;
- (void)saveToArchive:(struct UIGraphicalAttachment *)arg1 archiver:(id)arg2;
- (void)loadFromArchive:(const struct UIGraphicalAttachment *)arg1 unarchiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;

@end

