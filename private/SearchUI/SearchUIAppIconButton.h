//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class SearchUIAppIconImage;

@interface SearchUIAppIconButton : UIButton
{
    SearchUIAppIconImage *_image;
}

@property(retain) SearchUIAppIconImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)appIconImageDidChange:(id)arg1;
- (void)updateWithBundleID:(id)arg1;
- (void)dealloc;
- (id)init;

@end
