//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;
@protocol PXRelatedEntry;

@interface _PXUIRelatedPreviewOrbContext : NSObject
{
    UIViewController *_previewViewController;
    id <PXRelatedEntry> _relatedEntry;
}

@property(retain, nonatomic) id <PXRelatedEntry> relatedEntry; // @synthesize relatedEntry=_relatedEntry;
@property(retain, nonatomic) UIViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
- (void).cxx_destruct;

@end

