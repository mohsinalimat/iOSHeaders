//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXPhotosDetailsUIViewController.h>

#import <PhotosUI/PUAccessoryContentViewController-Protocol.h>

@class NSString, _UIContentUnavailableView;
@protocol PUAccessoryContentViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotosDetailsViewController : PXPhotosDetailsUIViewController <PUAccessoryContentViewController>
{
    struct {
        _Bool scrollViewControllerDidScroll;
        _Bool scrollViewControllerContentBoundsDidChange;
    } _superRespondsTo;
    _UIContentUnavailableView *_contentUnavailableView;
    id <PUAccessoryContentViewControllerDelegate> _accessoryContentViewControllerDelegate;
}

@property(nonatomic) __weak id <PUAccessoryContentViewControllerDelegate> accessoryContentViewControllerDelegate; // @synthesize accessoryContentViewControllerDelegate=_accessoryContentViewControllerDelegate;
- (void).cxx_destruct;
- (void)scrollViewControllerContentBoundsDidChange:(id)arg1;
- (void)scrollViewControllerDidScroll:(id)arg1;
- (struct CGRect)contentBoundsInCoordinateSpace:(id)arg1;
- (_Bool)contentAreaContainsPoint:(struct CGPoint)arg1 inCoordinateSpace:(id)arg2;
- (void)setContentInsets:(struct UIEdgeInsets)arg1 changeReason:(long long)arg2;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets;
- (unsigned long long)occludedContentEdges;
- (struct CGSize)preferredContentSize;
- (void)_layoutContentUnavailableView;
- (void)setContentEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)setEmpty:(_Bool)arg1;
- (id)initWithContext:(id)arg1 configuration:(id)arg2;
- (id)initWithContext:(id)arg1 options:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGSize minimumContentSize;
@property(readonly) Class superclass;

@end
