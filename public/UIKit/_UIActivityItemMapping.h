//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIActivityItemMapping : NSObject
{
}

+ (id)_openURLAnnotationForActivityItem:(id)arg1 activityType:(id)arg2;
+ (id)_attachmentNameForActivityItem:(id)arg1 activityType:(id)arg2;
+ (id)_thumbnailImageForActivityItem:(id)arg1 thumbnailSize:(struct CGSize)arg2 activityType:(id)arg3;
+ (id)_dataTypeIdentifierForActivityItem:(id)arg1 activityType:(id)arg2;
+ (id)_subjectForActivityItem:(id)arg1 activityType:(id)arg2;
+ (id)_itemProviderForActivityItem:(id)arg1 typeIdentifier:(id)arg2 thumbnailSize:(struct CGSize)arg3 activityType:(id)arg4;
+ (void)_clearActivityItems:(id)arg1;
+ (void)_addActivityItem:(id)arg1 activityViewController:(id)arg2 originalActivityItem:(id)arg3;
+ (id)_activeActivityViewControllers;
+ (void)_removeFromActiveActivityViewControllers:(id)arg1;
+ (void)_addToActiveActivityViewControllers:(id)arg1;

@end

