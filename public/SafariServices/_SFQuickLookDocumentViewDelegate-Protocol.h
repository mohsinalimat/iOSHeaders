//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariServices/NSObject-Protocol.h>

@class NSItemProvider, _SFQuickLookDocumentView;

@protocol _SFQuickLookDocumentViewDelegate <NSObject>
- (long long)dataOwnerForQuickLookDocumentView:(_SFQuickLookDocumentView *)arg1;

@optional
- (NSItemProvider *)itemProviderForQuickLookDocumentView:(_SFQuickLookDocumentView *)arg1;
- (void)quickLookDocumentView:(_SFQuickLookDocumentView *)arg1 didSelectActionAtIndex:(long long)arg2;
@end

