//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosEditUI/NSObject-Protocol.h>

@class PUViewModel, PUViewModelChange;

@protocol PUViewModelChangeObserver <NSObject>

@optional
- (void)viewModel:(PUViewModel *)arg1 didChange:(PUViewModelChange *)arg2;
@end
