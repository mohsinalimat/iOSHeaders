//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISearchBar.h>

@protocol MusicSearchBarDelegate;

@interface MusicSearchBar : UISearchBar
{
}

- (_Bool)_isInBar;
- (void)layoutSubviews;
@property(readonly, nonatomic) struct UIEdgeInsets searchBarContentEdgeInsets;

// Remaining properties
@property(nonatomic) id <MusicSearchBarDelegate> delegate; // @dynamic delegate;

@end

