//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosExtras/VideosExtrasElementViewController.h>

@class IKViewElement;

@interface VideosExtrasViewElementViewController : VideosExtrasElementViewController
{
    _Bool _embedded;
    IKViewElement *_viewElement;
}

@property(nonatomic) _Bool embedded; // @synthesize embedded=_embedded;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long preferredLayoutAttribute;
@property(readonly, nonatomic) id preferredLayoutGuide;
@property(readonly, nonatomic) _Bool matchParentHeight;
- (void)viewDidLoad;
- (id)initWithViewElement:(id)arg1;

@end

