#ifndef BRAIN_H
# define BRAIN_H

class Brain
{
	public:
		Brain();
		virtual ~Brain();
		Brain& operator=(const Brain& source);
		Brain(const Brain& source);

		std::string	getIdea(int	i);
		void		printAllIdeas();
		void		setIdea(int i, std::string newidea);

	private:
		std::string	_ideas[100];
};

#endif