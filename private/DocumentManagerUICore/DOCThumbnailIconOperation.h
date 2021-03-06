//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DocumentManagerUICore/DOCThumbnailBaseOperation.h>

@class NSString;

@interface DOCThumbnailIconOperation : DOCThumbnailBaseOperation
{
    _Bool _folded;
    NSString *_contentType;
}

+ (id)synchronousDocumentIconForContentType:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 style:(unsigned long long)arg4 folded:(_Bool)arg5;
+ (id)synchronousFolderIcon:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 icon:(id)arg4 style:(unsigned long long)arg5;
+ (id)synchronousFolderIconWithSize:(struct CGSize)arg1 scale:(double)arg2 style:(unsigned long long)arg3;
+ (id)synchronousIconForContentType:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 style:(unsigned long long)arg4 folded:(_Bool)arg5;
@property(readonly, nonatomic) _Bool folded; // @synthesize folded=_folded;
@property(readonly, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
- (void).cxx_destruct;
- (_Bool)generateThumbnail:(id *)arg1 representativeIcon:(_Bool *)arg2;
- (id)initWithContentType:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 delegate:(id)arg4 style:(unsigned long long)arg5 folded:(_Bool)arg6 qos:(unsigned int)arg7;

@end

