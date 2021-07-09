#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP

class ATarget;

class BrickWall : public ATarget {

	public:

		BrickWall(void);
		virtual ~BrickWall(void);

		virtual ATarget		*clone(void) const;
};

#endif
