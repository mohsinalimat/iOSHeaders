//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RemoteUI/RUIElement.h>

@class NSString, RUIPage;

@interface RUIPageElement : RUIElement
{
    RUIPage *_page;
}

@property(nonatomic) __weak RUIPage *page; // @synthesize page=_page;
- (void).cxx_destruct;
@property(nonatomic, getter=isLoading) _Bool loading;
@property(copy, nonatomic) NSString *title;
- (id)staticValues;

@end

