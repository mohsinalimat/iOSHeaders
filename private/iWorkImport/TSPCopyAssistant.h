//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSPPasteboardWriteAssistant.h>

@class TSPPasteboard;

__attribute__((visibility("hidden")))
@interface TSPCopyAssistant : TSPPasteboardWriteAssistant
{
    TSPPasteboard *_pasteboard;
    _Bool _didAttemptToCopy;
}

- (void).cxx_destruct;
- (void)copyToPasteboardIsSmartCopy:(_Bool)arg1;
- (void)copyToPasteboard;
- (void)loadData;
- (id)initWithPasteboard:(id)arg1 sourceContext:(id)arg2;
- (id)initWithContext:(id)arg1;

@end

