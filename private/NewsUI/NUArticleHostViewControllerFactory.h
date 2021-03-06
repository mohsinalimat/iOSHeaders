//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUArticleHostViewControllerFactory-Protocol.h>

@class NSString;
@protocol NUArticleViewControllerFactory, NUErrorMessageFactory, NUSettings;

@interface NUArticleHostViewControllerFactory : NSObject <NUArticleHostViewControllerFactory>
{
    id <NUArticleViewControllerFactory> _articleViewControllerFactory;
    id <NUSettings> _settings;
    id <NUErrorMessageFactory> _errorMessageFactory;
}

@property(readonly, nonatomic) id <NUErrorMessageFactory> errorMessageFactory; // @synthesize errorMessageFactory=_errorMessageFactory;
@property(readonly, copy, nonatomic) id <NUSettings> settings; // @synthesize settings=_settings;
@property(readonly, nonatomic) id <NUArticleViewControllerFactory> articleViewControllerFactory; // @synthesize articleViewControllerFactory=_articleViewControllerFactory;
- (void).cxx_destruct;
- (id)createArticleHostViewControllerForArticle:(id)arg1;
- (id)initWithArticleViewControllerFactory:(id)arg1 settings:(id)arg2 errorMessageFactory:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

