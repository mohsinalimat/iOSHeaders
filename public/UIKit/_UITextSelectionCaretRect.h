//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextSelectionRect.h>

__attribute__((visibility("hidden")))
@interface _UITextSelectionCaretRect : UITextSelectionRect
{
    struct CGRect _rect;
}

+ (id)selectionRectWithRect:(struct CGRect)arg1;
- (_Bool)isVertical;
- (_Bool)containsEnd;
- (_Bool)containsStart;
- (long long)writingDirection;
- (struct CGRect)rect;

@end

