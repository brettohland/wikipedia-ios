
@interface UIView (VisualTestSizingUtils)

- (void)wmf_sizeToFitWindowWidth;

- (void)wmf_sizeToFitWidth:(CGFloat)width;

- (CGRect)wmf_sizeThatFitsWidth:(CGFloat)width;

@end
